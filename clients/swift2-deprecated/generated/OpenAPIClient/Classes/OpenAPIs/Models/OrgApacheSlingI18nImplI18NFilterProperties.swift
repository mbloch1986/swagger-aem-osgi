//
// OrgApacheSlingI18nImplI18NFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingI18nImplI18NFilterProperties: JSONEncodable {
    public var serviceRanking: ConfigNodePropertyInteger?
    public var slingFilterScope: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["service.ranking"] = self.serviceRanking?.encodeToJSON()
        nillableDictionary["sling.filter.scope"] = self.slingFilterScope?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
