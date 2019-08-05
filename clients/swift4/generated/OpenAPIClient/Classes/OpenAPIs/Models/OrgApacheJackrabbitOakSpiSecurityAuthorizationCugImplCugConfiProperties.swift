//
// OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties: Codable {

    public var cugSupportedPaths: ConfigNodePropertyArray?
    public var cugEnabled: ConfigNodePropertyBoolean?
    public var configurationRanking: ConfigNodePropertyInteger?

    public init(cugSupportedPaths: ConfigNodePropertyArray?, cugEnabled: ConfigNodePropertyBoolean?, configurationRanking: ConfigNodePropertyInteger?) {
        self.cugSupportedPaths = cugSupportedPaths
        self.cugEnabled = cugEnabled
        self.configurationRanking = configurationRanking
    }


}
