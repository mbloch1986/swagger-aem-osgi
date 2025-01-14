//
// ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqSocialCalendarClientEndpointsImplCalendarOperationsIProperties: Codable {

    public var maxRetry: ConfigNodePropertyInteger?
    public var fieldWhitelist: ConfigNodePropertyArray?
    public var attachmentTypeBlacklist: ConfigNodePropertyArray?

    public init(maxRetry: ConfigNodePropertyInteger?, fieldWhitelist: ConfigNodePropertyArray?, attachmentTypeBlacklist: ConfigNodePropertyArray?) {
        self.maxRetry = maxRetry
        self.fieldWhitelist = fieldWhitelist
        self.attachmentTypeBlacklist = attachmentTypeBlacklist
    }

    public enum CodingKeys: String, CodingKey { 
        case maxRetry = "MaxRetry"
        case fieldWhitelist
        case attachmentTypeBlacklist
    }


}

