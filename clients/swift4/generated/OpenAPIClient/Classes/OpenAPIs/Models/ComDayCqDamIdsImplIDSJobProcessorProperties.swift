//
// ComDayCqDamIdsImplIDSJobProcessorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamIdsImplIDSJobProcessorProperties: Codable {

    public var enableMultisession: ConfigNodePropertyBoolean?
    public var idsCcEnable: ConfigNodePropertyBoolean?
    public var enableRetry: ConfigNodePropertyBoolean?
    public var enableRetryScripterror: ConfigNodePropertyBoolean?
    public var externalizerDomainCqhost: ConfigNodePropertyString?
    public var externalizerDomainHttp: ConfigNodePropertyString?

    public init(enableMultisession: ConfigNodePropertyBoolean?, idsCcEnable: ConfigNodePropertyBoolean?, enableRetry: ConfigNodePropertyBoolean?, enableRetryScripterror: ConfigNodePropertyBoolean?, externalizerDomainCqhost: ConfigNodePropertyString?, externalizerDomainHttp: ConfigNodePropertyString?) {
        self.enableMultisession = enableMultisession
        self.idsCcEnable = idsCcEnable
        self.enableRetry = enableRetry
        self.enableRetryScripterror = enableRetryScripterror
        self.externalizerDomainCqhost = externalizerDomainCqhost
        self.externalizerDomainHttp = externalizerDomainHttp
    }

    public enum CodingKeys: String, CodingKey { 
        case enableMultisession = "enable.multisession"
        case idsCcEnable = "ids.cc.enable"
        case enableRetry = "enable.retry"
        case enableRetryScripterror = "enable.retry.scripterror"
        case externalizerDomainCqhost = "externalizer.domain.cqhost"
        case externalizerDomainHttp = "externalizer.domain.http"
    }


}

