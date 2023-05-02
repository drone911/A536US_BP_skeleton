RrmFt::RRM_ASTUNNEL_NR_RESUME_REQ_Handler
RrmFt::BuildMsg[RRM_RRM_RAT_RESUME_REQ, MsgGrpId:0]
>>CanNot AllocMsg about RRM_RRM_RAT_RESUME_REQ
>>CanNot CreateDynamicSmAndChildren
RrmFt::RRM_ASTUNNEL_NR_SUSPEND_REQ_Handler
RrmFt::BuildMsg[RRM_RRM_RAT_SUSPEND_REQ, MsgGrpId:0]
>>CanNot AllocMsg about RRM_RRM_RAT_SUSPEND_REQ
RrmFt::RRM_RRC_INIT_REQ_Handler - SupportedRatMap(%d)
RrmFt::RRM_L1C_INIT_CNF_Handler - Result(%d)
RrmFt::RRM_L1C_STOP_CNF_Handler - Result(%d)
RrmFt::RRM_RRC_STOP_REQ_Handler - SupportedRatMap(%d)
RrmFt::RRM_RRC_RAT_RESUME_REQ_Handler(DomainType:%d, routingInfo:0x%x)
(RRM_RRC_RAT_RESUME_REQ_Handler)>>MsgGrpId:%d, TargetRat:%d, Type:%d, IdleTempCtrl:%d, ConnTempCtrl:%d, isFeDvOn:%d
RrmFt::BuildMsg[RRM_RRM_RAT_RESUME_REQ, MsgGrpId:%d]
RrmFt::BuildMsg[RRC_RRM_RAT_RESUME_CNF, MsgGrpId:%d]
>>Invalid RoutingInfo(%d)
RrmFt::RRM_RRC_RAT_SUSPEND_REQ_Handler(DomainType:%d, routingInfo:0x%x)
nullptr == pRrmCdmaSm (DomainType:%d, routingInfo:0x%x)
(RRM_RRC_RAT_SUSPEND_REQ_Handler)>>MsgGrpId:%d, TargetRat:%d, Type:%d, ScgDbDoNotRelease:%d
>>nullptr == pRrmNrSm (DomainType:%d, routingInfo:0x%x)
RrmFt::BuildMsg[RRC_RRM_RAT_SUSPEND_CNF, MsgGrpId:%d]
RrmFt::BuildMsg[RRM_RRM_RAT_SUSPEND_REQ, MsgGrpId:%d]
>>Invalid RoutingInfo(%d)
RrmFt::RRM_RRM_RAT_RESUME_CNF_Handler(routingInfo:0x%x)
(RRM_RRM_RAT_RESUME_CNF_Handler)>>MsgGrpId:%d, Result:%d
RrmFt::BuildMsg[RRC_RRM_RAT_RESUME_CNF, MsgGrpId:%d]
>>Invalid RoutingInfo(%d)
RrmFt::RRM_RRM_RAT_SUSPEND_CNF_Handler(DomainType:%d, routingInfo:0x%x)
(RRM_RRM_RAT_SUSPEND_CNF_Handler)>>MsgGrpId:%d, Result:%d, IsAsTunnel:%d
RrmFt::BuildMsg[RRC_RRM_RAT_SUSPEND_CNF, MsgGrpId:%d]
>>CanNot send RRC_RRM_RAT_SUSPEND_CNF. Because F_USING_ASTUNNEL was Enable
>>call DeleteDynamicSm
