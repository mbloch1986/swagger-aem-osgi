//
// ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingProperties: JSONEncodable {

    public var enabled: ConfigNodePropertyBoolean?
    public var fallbackPaths: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["enabled"] = self.enabled?.encodeToJSON()
        nillableDictionary["fallbackPaths"] = self.fallbackPaths?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
