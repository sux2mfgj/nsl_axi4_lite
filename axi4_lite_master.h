#ifndef __INCLUDED_AXI4_LITE_MASTER_H__
#define __INCLUDED_AXI4_LITE_MASTER_H__

#define AXI_ADDR_WIDTH (32)
#define AXI_DATA_WIDTH (32)

declare axi4_lite_master
{
    // global signals
    input aclk;
    input reset;

    //write address channel
    //output awvalid;
    func_out awvalid;
    input awready;
    output awaddr[AXI_ADDR_WIDTH];
    output awprot[3];

    // write data channel
//     output wvalid;
    func_out wvalid;
    input wready;
    output wdata[AXI_DATA_WIDTH];
    output wstrb[AXI_DATA_WIDTH / 8];

    // write response channel
    input bvalid;
    //output bready;
    func_out bready;
    input bresp[2];

    // read address channel
    //output arvalid;
    func_out arvalid;
    input arready;
    output araddr[AXI_ADDR_WIDTH];
    output arprot[3];

    //read data channel
    input rvalid;
    //output rready;
    func_out rready;
    input rdata[AXI_DATA_WIDTH];
    input rresp[2];

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
