//
// OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingDistributionAgentImplPrivilegeDistributionRequestAProperties: JSONEncodable {

    public var name: ConfigNodePropertyString?
    public var jcrPrivilege: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["name"] = self.name?.encodeToJSON()
        nillableDictionary["jcrPrivilege"] = self.jcrPrivilege?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
