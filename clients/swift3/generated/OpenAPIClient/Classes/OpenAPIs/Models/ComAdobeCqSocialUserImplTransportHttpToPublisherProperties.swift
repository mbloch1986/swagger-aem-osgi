//
// ComAdobeCqSocialUserImplTransportHttpToPublisherProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqSocialUserImplTransportHttpToPublisherProperties: JSONEncodable {

    public var enable: ConfigNodePropertyBoolean?
    public var agentConfiguration: ConfigNodePropertyArray?
    public var contextPath: ConfigNodePropertyString?
    public var disabledCipherSuites: ConfigNodePropertyArray?
    public var enabledCipherSuites: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["enable"] = self.enable?.encodeToJSON()
        nillableDictionary["agent.configuration"] = self.agentConfiguration?.encodeToJSON()
        nillableDictionary["context.path"] = self.contextPath?.encodeToJSON()
        nillableDictionary["disabled.cipher.suites"] = self.disabledCipherSuites?.encodeToJSON()
        nillableDictionary["enabled.cipher.suites"] = self.enabledCipherSuites?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

