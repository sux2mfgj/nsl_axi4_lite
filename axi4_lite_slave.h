#ifndef __INCLUDED_AXI4_LITE_SLAVE_H__
#define __INCLUDED_AXI4_LITE_SLAVE_H__

#include "axi_reg_width.nh"

#define AXI_ADDR_WIDTH (32)
#define AXI_DATA_WIDTH (32)

#define AXI4_LITE_SLAVE_INTERFACES input awvalid; func_out awready; input awaddr[AXI_ADDR_WIDTH]; input awprot[3]; input wvalid; func_out wready; input wdata[AXI_DATA_WIDTH]; input wstrb[AXI_DATA_WIDTH / 8]; func_out bvalid; input bready; output bresp[2]; input arvalid; func_out arready; input araddr[AXI_ADDR_WIDTH]; input arprot[3]; func_out rvalid; input rready; output rdata[AXI_DATA_WIDTH]; output rresp[2];

declare axi4_lite_slave
{
    AXI4_LITE_SLAVE_INTERFACES

    output in_data[AXI_DATA_WIDTH];
    output data_addr[AXI_REG_WIDTH];
    input out_data[AXI_DATA_WIDTH];

    func_out receive_data(data_addr, in_data);
    func_out get_data(data_addr): out_data;
}

#endif
