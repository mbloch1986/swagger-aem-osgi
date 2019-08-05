//
// OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties: JSONEncodable {

    public var ignorePropertyNameRegex: ConfigNodePropertyArray?
    public var configCollectionPropertiesResourceNames: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["ignorePropertyNameRegex"] = self.ignorePropertyNameRegex?.encodeToJSON()
        nillableDictionary["configCollectionPropertiesResourceNames"] = self.configCollectionPropertiesResourceNames?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
