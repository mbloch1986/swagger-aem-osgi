//
// ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties: Codable {

    public var path: ConfigNodePropertyArray?
    public var serviceRanking: ConfigNodePropertyInteger?

    public init(path: ConfigNodePropertyArray?, serviceRanking: ConfigNodePropertyInteger?) {
        self.path = path
        self.serviceRanking = serviceRanking
    }

    public enum CodingKeys: String, CodingKey { 
        case path
        case serviceRanking = "service.ranking"
    }


}

