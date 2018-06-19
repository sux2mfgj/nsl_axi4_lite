
build:
	nsl2vl -neg_res axi4_lite_slave.nsl -o ./slave_test/axi4_lite_slave.v
	nsl2vl -neg_res slave_test/led_axi4_slave.nsl -o ./slave_test/led_axi4_slave.v
#	nsl2vl -neg_res axi4_lite_master.nsl
#	nsl2vl -neg_res ./master_test/write_value_via_axi.nsl

clean:
	rm -rf *.v
