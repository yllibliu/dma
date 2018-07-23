#dma
##Usage
1. Specify which dmaengine-compatible DMA channels you'd like to create userspace-accessible device files for in your device tree:

    ```
    udma0 {
        compatible = "generic-uio";
        dmas = <&loopback_dma 0 &loopback_dma 1>;
        dma-names = "loop_tx", "loop_rx";
        udma,dirs = <2 1>;      // direction of DMA channel: 
                                //   1 = RX (dev->cpu), 2 = TX (cpu->dev)
    };
    ```
For now, udma only support two channel device(one s2mm and one mm2s), please ensure the device node get the correct reference of dma channel.

2. After booting Linux, uio node will become available, 
    ```
        /dev/uioX
    ```

3. Sending data is as simple as:

    ```
        int xfer_size = 16;
        uint32_t tx_buf[xfer_xize], rx_buf[xfersize];
        int fd = open("/dev/uio0", O_RDWR | O_SYNC);

        write(fd, tx_buf, xfer_size);    // send a DMA transaction
        read (fd, rx_buf, xfer_size);
    ```

## Compiling the Kernel
We make a little modification on uio.c and uio_pdrv_genirq.c, so we need to replace these two files. Further, we add udma.c and udma.h, please put udma.c under "KERNEL_DIR/drivers/uio/" and udma.h under "KERNEL_DIR/include/linux/". After recompiling, you will get a Linux Kernel with UIO drvier supporting AXI DMA.



## License (GPL)

Copyright (C) 2018 Billy Liu

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, see <http://www.gnu.org/licenses/>.