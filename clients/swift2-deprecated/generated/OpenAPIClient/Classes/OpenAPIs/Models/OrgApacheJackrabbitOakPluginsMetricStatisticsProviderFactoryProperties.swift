//
// OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties: JSONEncodable {
    public var providerType: ConfigNodePropertyDropDown?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["providerType"] = self.providerType?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}