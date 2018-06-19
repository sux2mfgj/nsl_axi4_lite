#ifndef __INCLUDED_WRITE_VALUE_VIA_AXI_H__
#define __INCLUDED_WRITE_VALUE_VIA_AXI_H__

#include "../axi4_lite_master.h"

declare write_value_via_axi
{
    AXI4_LITE_MASTER_INTERFACE
    input sw[2];
}

#endif
