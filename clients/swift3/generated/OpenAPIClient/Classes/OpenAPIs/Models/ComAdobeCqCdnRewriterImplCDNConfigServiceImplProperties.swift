//
// ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqCdnRewriterImplCDNConfigServiceImplProperties: JSONEncodable {

    public var cdnConfigDistributionDomain: ConfigNodePropertyString?
    public var cdnConfigEnableRewriting: ConfigNodePropertyBoolean?
    public var cdnConfigPathPrefixes: ConfigNodePropertyArray?
    public var cdnConfigCdnttl: ConfigNodePropertyInteger?
    public var cdnConfigApplicationProtocol: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["cdn.config.distribution.domain"] = self.cdnConfigDistributionDomain?.encodeToJSON()
        nillableDictionary["cdn.config.enable.rewriting"] = self.cdnConfigEnableRewriting?.encodeToJSON()
        nillableDictionary["cdn.config.path.prefixes"] = self.cdnConfigPathPrefixes?.encodeToJSON()
        nillableDictionary["cdn.config.cdnttl"] = self.cdnConfigCdnttl?.encodeToJSON()
        nillableDictionary["cdn.config.application.protocol"] = self.cdnConfigApplicationProtocol?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
