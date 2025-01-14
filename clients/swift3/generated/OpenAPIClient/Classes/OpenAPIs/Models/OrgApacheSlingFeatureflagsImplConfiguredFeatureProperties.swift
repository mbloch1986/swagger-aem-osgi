//
// OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingFeatureflagsImplConfiguredFeatureProperties: JSONEncodable {

    public var name: ConfigNodePropertyString?
    public var description: ConfigNodePropertyString?
    public var enabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["name"] = self.name?.encodeToJSON()
        nillableDictionary["description"] = self.description?.encodeToJSON()
        nillableDictionary["enabled"] = self.enabled?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

