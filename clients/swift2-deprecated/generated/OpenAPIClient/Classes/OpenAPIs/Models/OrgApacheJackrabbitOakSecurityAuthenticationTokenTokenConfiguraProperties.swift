//
// OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheJackrabbitOakSecurityAuthenticationTokenTokenConfiguraProperties: JSONEncodable {
    public var tokenExpiration: ConfigNodePropertyString?
    public var tokenLength: ConfigNodePropertyString?
    public var tokenRefresh: ConfigNodePropertyBoolean?
    public var tokenCleanupThreshold: ConfigNodePropertyInteger?
    public var passwordHashAlgorithm: ConfigNodePropertyString?
    public var passwordHashIterations: ConfigNodePropertyInteger?
    public var passwordSaltSize: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["tokenExpiration"] = self.tokenExpiration?.encodeToJSON()
        nillableDictionary["tokenLength"] = self.tokenLength?.encodeToJSON()
        nillableDictionary["tokenRefresh"] = self.tokenRefresh?.encodeToJSON()
        nillableDictionary["tokenCleanupThreshold"] = self.tokenCleanupThreshold?.encodeToJSON()
        nillableDictionary["passwordHashAlgorithm"] = self.passwordHashAlgorithm?.encodeToJSON()
        nillableDictionary["passwordHashIterations"] = self.passwordHashIterations?.encodeToJSON()
        nillableDictionary["passwordSaltSize"] = self.passwordSaltSize?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
