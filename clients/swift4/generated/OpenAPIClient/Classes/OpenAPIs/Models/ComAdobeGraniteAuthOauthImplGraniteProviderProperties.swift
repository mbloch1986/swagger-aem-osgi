//
// ComAdobeGraniteAuthOauthImplGraniteProviderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteAuthOauthImplGraniteProviderProperties: Codable {

    public var oauthProviderId: ConfigNodePropertyString?
    public var oauthProviderGraniteAuthorizationUrl: ConfigNodePropertyString?
    public var oauthProviderGraniteTokenUrl: ConfigNodePropertyString?
    public var oauthProviderGraniteProfileUrl: ConfigNodePropertyString?
    public var oauthProviderGraniteExtendedDetailsUrls: ConfigNodePropertyString?

    public init(oauthProviderId: ConfigNodePropertyString?, oauthProviderGraniteAuthorizationUrl: ConfigNodePropertyString?, oauthProviderGraniteTokenUrl: ConfigNodePropertyString?, oauthProviderGraniteProfileUrl: ConfigNodePropertyString?, oauthProviderGraniteExtendedDetailsUrls: ConfigNodePropertyString?) {
        self.oauthProviderId = oauthProviderId
        self.oauthProviderGraniteAuthorizationUrl = oauthProviderGraniteAuthorizationUrl
        self.oauthProviderGraniteTokenUrl = oauthProviderGraniteTokenUrl
        self.oauthProviderGraniteProfileUrl = oauthProviderGraniteProfileUrl
        self.oauthProviderGraniteExtendedDetailsUrls = oauthProviderGraniteExtendedDetailsUrls
    }

    public enum CodingKeys: String, CodingKey { 
        case oauthProviderId = "oauth.provider.id"
        case oauthProviderGraniteAuthorizationUrl = "oauth.provider.granite.authorization.url"
        case oauthProviderGraniteTokenUrl = "oauth.provider.granite.token.url"
        case oauthProviderGraniteProfileUrl = "oauth.provider.granite.profile.url"
        case oauthProviderGraniteExtendedDetailsUrls = "oauth.provider.granite.extended.details.urls"
    }


}

