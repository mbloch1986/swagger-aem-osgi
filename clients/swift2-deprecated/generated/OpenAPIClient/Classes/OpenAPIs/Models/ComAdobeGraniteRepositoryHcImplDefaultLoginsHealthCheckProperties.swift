//
// ComAdobeGraniteRepositoryHcImplDefaultLoginsHealthCheckProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteRepositoryHcImplDefaultLoginsHealthCheckProperties: JSONEncodable {
    public var hcTags: ConfigNodePropertyArray?
    public var accountLogins: ConfigNodePropertyArray?
    public var consoleLogins: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["hc.tags"] = self.hcTags?.encodeToJSON()
        nillableDictionary["account.logins"] = self.accountLogins?.encodeToJSON()
        nillableDictionary["console.logins"] = self.consoleLogins?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
