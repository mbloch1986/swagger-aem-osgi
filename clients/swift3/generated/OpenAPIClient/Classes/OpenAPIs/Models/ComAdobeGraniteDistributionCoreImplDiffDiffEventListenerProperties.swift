//
// ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeGraniteDistributionCoreImplDiffDiffEventListenerProperties: JSONEncodable {

    public var diffPath: ConfigNodePropertyString?
    public var serviceName: ConfigNodePropertyString?
    public var serviceUserTarget: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["diffPath"] = self.diffPath?.encodeToJSON()
        nillableDictionary["serviceName"] = self.serviceName?.encodeToJSON()
        nillableDictionary["serviceUser.target"] = self.serviceUserTarget?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
