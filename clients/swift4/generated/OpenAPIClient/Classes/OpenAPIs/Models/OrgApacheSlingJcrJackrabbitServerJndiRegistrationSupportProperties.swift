//
// OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheSlingJcrJackrabbitServerJndiRegistrationSupportProperties: Codable {

    public var javaNamingFactoryInitial: ConfigNodePropertyString?
    public var javaNamingProviderUrl: ConfigNodePropertyString?

    public init(javaNamingFactoryInitial: ConfigNodePropertyString?, javaNamingProviderUrl: ConfigNodePropertyString?) {
        self.javaNamingFactoryInitial = javaNamingFactoryInitial
        self.javaNamingProviderUrl = javaNamingProviderUrl
    }

    public enum CodingKeys: String, CodingKey { 
        case javaNamingFactoryInitial = "java.naming.factory.initial"
        case javaNamingProviderUrl = "java.naming.provider.url"
    }


}

