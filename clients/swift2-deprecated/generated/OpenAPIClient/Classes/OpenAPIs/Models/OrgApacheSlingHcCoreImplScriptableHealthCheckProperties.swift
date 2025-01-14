//
// OrgApacheSlingHcCoreImplScriptableHealthCheckProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingHcCoreImplScriptableHealthCheckProperties: JSONEncodable {
    public var hcName: ConfigNodePropertyString?
    public var hcTags: ConfigNodePropertyArray?
    public var hcMbeanName: ConfigNodePropertyString?
    public var expression: ConfigNodePropertyString?
    public var languageExtension: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["hc.name"] = self.hcName?.encodeToJSON()
        nillableDictionary["hc.tags"] = self.hcTags?.encodeToJSON()
        nillableDictionary["hc.mbean.name"] = self.hcMbeanName?.encodeToJSON()
        nillableDictionary["expression"] = self.expression?.encodeToJSON()
        nillableDictionary["language.extension"] = self.languageExtension?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
