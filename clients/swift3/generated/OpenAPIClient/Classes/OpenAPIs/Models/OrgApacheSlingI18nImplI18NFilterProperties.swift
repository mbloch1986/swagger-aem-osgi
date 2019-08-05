//
// OrgApacheSlingI18nImplI18NFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingI18nImplI18NFilterProperties: JSONEncodable {

    public var serviceRanking: ConfigNodePropertyInteger?
    public var slingFilterScope: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["service.ranking"] = self.serviceRanking?.encodeToJSON()
        nillableDictionary["sling.filter.scope"] = self.slingFilterScope?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
