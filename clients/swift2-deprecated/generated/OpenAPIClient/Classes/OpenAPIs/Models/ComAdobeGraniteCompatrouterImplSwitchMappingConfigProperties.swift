//
// ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties: JSONEncodable {
    public var group: ConfigNodePropertyString?
    public var ids: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["group"] = self.group?.encodeToJSON()
        nillableDictionary["ids"] = self.ids?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}