#ifndef __INCLUDED_AXI4_LITE_SLAVE_H__
#define __INCLUDED_AXI4_LITE_SLAVE_H__

#define AXI_ADDR_WIDTH (32)
#define AXI_DATA_WIDTH (32)

declare axi4_lite_slave
{
    //write address channel
    //input awvalid;
    input awvalid;
    func_out awready;
    input awaddr[AXI_ADDR_WIDTH];
    input awprot[3];

    // write data channel
    input wvalid;
    func_out wready;
    input wdata[AXI_DATA_WIDTH];
    input wstrb[AXI_DATA_WIDTH / 8];

    // write response channel
    func_out bvalid;
    input bready;
    output bresp[2];

    // read address channel
    input arvalid;
    func_out arready;
    input araddr[AXI_ADDR_WIDTH];
    input arprot[3];

    //read data channel
    func_out rvalid;
    input rready;
    output rdata[AXI_DATA_WIDTH];
    output rresp[2];
}

#endif
