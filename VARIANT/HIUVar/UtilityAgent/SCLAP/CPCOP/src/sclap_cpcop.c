CPCOP: Client tries to register CB function w/ null pointer
CPCOP: No more client can be registered to CPCOP task
CPCOP: client %d is registered
CPCOP: sclap_cpcop_rxmb, Message_addr as a null pointer input!
CPCOP: sclap_cpcop_rxmb failed, unknown value of cliorsrc %d
CPCOP: sclap_cpcop_txmb, Message as a null pointer input!
CPCOP: sclap_cpcop_txmb to CPCOP (as a virtual source task)
CPCOP: sclap_cpcop_txmb failed, unknown value of srcorshub %d
CPCOP: sclap_cpcop_txmb failed, ret_shannon %d
CPCOP: MESSAGE from ssh of size %d -----
CPCOP: FAIL in msg parser: msg_size %d, MSG_BUFF_SIZE_SSH %d, msg_buff_for_ssh[0] %d
CPCOP: parsed data is Sensor Response
CPCOP: Sensor Response cmd %d type %d
CPCOP: Sensor Response length %d data %d
CPCOP: sensor %d is not supported yet!! Stop the sensor
CPCOP: parsed data is MCU boot message
CPCOP: cmd %d is not matching with data %d
CPCOP: RESET SRCs and CXTs who are using SHUB
CPCOP: parsed data is WiFi Response
CPCOP: cmd %d type %d length %d
CPCOP: WiFi service type %d is not supported yet!!
CPCOP: parsed data UNKNOWN!!!!, do not report
CPCOP: cmd %d type %d
CPCOP: length %d data %d
CPCOP: MB not sent, send_result %d
CPCOP: SSCPCOP_SOURCE_Q_SIG!! w/ CPCOP_a_cnt %d -----
CPCOP: SSCPCOP_CLIENT_Q_SIG!! w/ CPCOP_a_cnt %d -----
CPCOP: Client_MB FAIL, defense %d > MAX_NUM_OF_SRC + 1
CPCOP: sclap_cpcop_source_msg_handler, null pointer input!
CPCOP: source_id: %d, data(TF): %d
CPCOP: update_src_list_result: %d
CPCOP: Client_MB FAIL, defense %d > MAX_NUM_OF_CLI + 1
CPCOP: break while loop to deal with source mailbox
CPCOP: sclap_cpcop_client_msg_handler, null pointer input!
CPCOP: client_id: %d, context: %d option(type): %d
CPCOP: update_cxt_list FAIL!!!!!! update_cxt_list_result %d
CPCOP: src_rqst_handler FAIL!!!!!!
CPCOP: Cancel the context request
