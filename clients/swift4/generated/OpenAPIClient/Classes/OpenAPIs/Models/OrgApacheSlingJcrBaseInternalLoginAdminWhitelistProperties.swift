//
// OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheSlingJcrBaseInternalLoginAdminWhitelistProperties: Codable {

    public var whitelistBypass: ConfigNodePropertyBoolean?
    public var whitelistBundlesRegexp: ConfigNodePropertyString?

    public init(whitelistBypass: ConfigNodePropertyBoolean?, whitelistBundlesRegexp: ConfigNodePropertyString?) {
        self.whitelistBypass = whitelistBypass
        self.whitelistBundlesRegexp = whitelistBundlesRegexp
    }

    public enum CodingKeys: String, CodingKey { 
        case whitelistBypass = "whitelist.bypass"
        case whitelistBundlesRegexp = "whitelist.bundles.regexp"
    }


}

