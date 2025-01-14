//
// OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheJackrabbitOakSecurityInternalSecurityProviderRegistratiProperties: JSONEncodable {

    public var requiredServicePids: ConfigNodePropertyArray?
    public var authorizationCompositionType: ConfigNodePropertyDropDown?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["requiredServicePids"] = self.requiredServicePids?.encodeToJSON()
        nillableDictionary["authorizationCompositionType"] = self.authorizationCompositionType?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

