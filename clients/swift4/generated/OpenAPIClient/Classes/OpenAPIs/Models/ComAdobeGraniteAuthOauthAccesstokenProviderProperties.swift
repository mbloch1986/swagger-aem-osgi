//
// ComAdobeGraniteAuthOauthAccesstokenProviderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteAuthOauthAccesstokenProviderProperties: Codable {

    public var name: ConfigNodePropertyString?
    public var authTokenProviderTitle: ConfigNodePropertyString?
    public var authTokenProviderDefaultClaims: ConfigNodePropertyArray?
    public var authTokenProviderEndpoint: ConfigNodePropertyString?
    public var authAccessTokenRequest: ConfigNodePropertyString?
    public var authTokenProviderKeypairAlias: ConfigNodePropertyString?
    public var authTokenProviderConnTimeout: ConfigNodePropertyInteger?
    public var authTokenProviderSoTimeout: ConfigNodePropertyInteger?
    public var authTokenProviderClientId: ConfigNodePropertyString?
    public var authTokenProviderScope: ConfigNodePropertyString?
    public var authTokenProviderReuseAccessToken: ConfigNodePropertyBoolean?
    public var authTokenProviderRelaxedSsl: ConfigNodePropertyBoolean?
    public var tokenRequestCustomizerType: ConfigNodePropertyString?
    public var authTokenValidatorType: ConfigNodePropertyString?

    public init(name: ConfigNodePropertyString?, authTokenProviderTitle: ConfigNodePropertyString?, authTokenProviderDefaultClaims: ConfigNodePropertyArray?, authTokenProviderEndpoint: ConfigNodePropertyString?, authAccessTokenRequest: ConfigNodePropertyString?, authTokenProviderKeypairAlias: ConfigNodePropertyString?, authTokenProviderConnTimeout: ConfigNodePropertyInteger?, authTokenProviderSoTimeout: ConfigNodePropertyInteger?, authTokenProviderClientId: ConfigNodePropertyString?, authTokenProviderScope: ConfigNodePropertyString?, authTokenProviderReuseAccessToken: ConfigNodePropertyBoolean?, authTokenProviderRelaxedSsl: ConfigNodePropertyBoolean?, tokenRequestCustomizerType: ConfigNodePropertyString?, authTokenValidatorType: ConfigNodePropertyString?) {
        self.name = name
        self.authTokenProviderTitle = authTokenProviderTitle
        self.authTokenProviderDefaultClaims = authTokenProviderDefaultClaims
        self.authTokenProviderEndpoint = authTokenProviderEndpoint
        self.authAccessTokenRequest = authAccessTokenRequest
        self.authTokenProviderKeypairAlias = authTokenProviderKeypairAlias
        self.authTokenProviderConnTimeout = authTokenProviderConnTimeout
        self.authTokenProviderSoTimeout = authTokenProviderSoTimeout
        self.authTokenProviderClientId = authTokenProviderClientId
        self.authTokenProviderScope = authTokenProviderScope
        self.authTokenProviderReuseAccessToken = authTokenProviderReuseAccessToken
        self.authTokenProviderRelaxedSsl = authTokenProviderRelaxedSsl
        self.tokenRequestCustomizerType = tokenRequestCustomizerType
        self.authTokenValidatorType = authTokenValidatorType
    }

    public enum CodingKeys: String, CodingKey { 
        case name
        case authTokenProviderTitle = "auth.token.provider.title"
        case authTokenProviderDefaultClaims = "auth.token.provider.default.claims"
        case authTokenProviderEndpoint = "auth.token.provider.endpoint"
        case authAccessTokenRequest = "auth.access.token.request"
        case authTokenProviderKeypairAlias = "auth.token.provider.keypair.alias"
        case authTokenProviderConnTimeout = "auth.token.provider.conn.timeout"
        case authTokenProviderSoTimeout = "auth.token.provider.so.timeout"
        case authTokenProviderClientId = "auth.token.provider.client.id"
        case authTokenProviderScope = "auth.token.provider.scope"
        case authTokenProviderReuseAccessToken = "auth.token.provider.reuse.access.token"
        case authTokenProviderRelaxedSsl = "auth.token.provider.relaxed.ssl"
        case tokenRequestCustomizerType = "token.request.customizer.type"
        case authTokenValidatorType = "auth.token.validator.type"
    }


}

