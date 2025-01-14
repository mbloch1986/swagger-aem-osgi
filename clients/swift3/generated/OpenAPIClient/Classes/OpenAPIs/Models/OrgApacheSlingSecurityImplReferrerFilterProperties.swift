//
// OrgApacheSlingSecurityImplReferrerFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingSecurityImplReferrerFilterProperties: JSONEncodable {

    public var allowEmpty: ConfigNodePropertyBoolean?
    public var allowHosts: ConfigNodePropertyArray?
    public var allowHostsRegexp: ConfigNodePropertyArray?
    public var filterMethods: ConfigNodePropertyArray?
    public var excludeAgentsRegexp: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["allow.empty"] = self.allowEmpty?.encodeToJSON()
        nillableDictionary["allow.hosts"] = self.allowHosts?.encodeToJSON()
        nillableDictionary["allow.hosts.regexp"] = self.allowHostsRegexp?.encodeToJSON()
        nillableDictionary["filter.methods"] = self.filterMethods?.encodeToJSON()
        nillableDictionary["exclude.agents.regexp"] = self.excludeAgentsRegexp?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

