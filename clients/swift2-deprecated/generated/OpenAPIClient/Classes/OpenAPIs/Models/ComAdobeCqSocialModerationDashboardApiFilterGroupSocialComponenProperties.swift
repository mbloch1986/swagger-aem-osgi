//
// ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqSocialModerationDashboardApiFilterGroupSocialComponenProperties: JSONEncodable {
    public var resourceTypeFilters: ConfigNodePropertyArray?
    public var priority: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["resourceType.filters"] = self.resourceTypeFilters?.encodeToJSON()
        nillableDictionary["priority"] = self.priority?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
