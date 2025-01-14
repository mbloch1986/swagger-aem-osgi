//
// OrgApacheAriesJmxFrameworkStateConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheAriesJmxFrameworkStateConfigProperties: JSONEncodable {

    public var attributeChangeNotificationEnabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["attributeChangeNotificationEnabled"] = self.attributeChangeNotificationEnabled?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

