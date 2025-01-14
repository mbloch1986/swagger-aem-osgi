//
// OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties: JSONEncodable {

    public var whitelistName: ConfigNodePropertyString?
    public var whitelistBundles: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["whitelist.name"] = self.whitelistName?.encodeToJSON()
        nillableDictionary["whitelist.bundles"] = self.whitelistBundles?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

