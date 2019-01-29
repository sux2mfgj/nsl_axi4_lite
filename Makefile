.PHONY: build slave master
build: slave master
slave:
	nsl2vl axi4_lite_slave.nsl

#slave:
#	nsl2vl -neg_res axi4_lite_slave.nsl -o ./slave_test/axi4_lite_slave.v
#	nsl2vl -neg_res slave_test/led_axi4_slave.nsl -o ./slave_test/led_axi4_slave.v
#
#master:
#	nsl2vl -neg_res axi4_lite_master.nsl -o ./master_test/axi4_lite_master.v
#	nsl2vl -neg_res ./master_test/write_value_via_axi.nsl -o ./master_test/write_value_via_axi.v
#
clean:
	rm -rf *.v master_test/*.v slave_test/*.v
