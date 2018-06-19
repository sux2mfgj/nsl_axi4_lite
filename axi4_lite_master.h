#ifndef __INCLUDED_AXI4_LITE_MASTER_H__
#define __INCLUDED_AXI4_LITE_MASTER_H__

#define AXI_ADDR_WIDTH (32)
#define AXI_DATA_WIDTH (32)

#define AXI4_LITE_MASTER_INTERFACE output awvalid; input awready; output awaddr[AXI_ADDR_WIDTH]; output awprot[3]; output wvalid; input wready; output wdata[AXI_DATA_WIDTH]; output wstrb[AXI_DATA_WIDTH / 8]; input bvalid; output bready; input bresp[2]; output arvalid; input arready; output araddr[AXI_ADDR_WIDTH]; output arprot[3]; input rvalid; output rready; input rdata[AXI_DATA_WIDTH]; input rresp[2];

declare axi4_lite_master
{
    AXI4_LITE_MASTER_INTERFACE

    /*
     * user interface
     */
    input address[AXI_ADDR_WIDTH];

    // read data
    output output_value[AXI_DATA_WIDTH];
    func_in read_value(address);
    func_out data_arrive(output_value);
    func_out read_error();

    // write data
    input write_data[AXI_DATA_WIDTH];
    func_in write_value(address, write_data);
    func_out write_done();
    func_out write_error();
}

#endif
