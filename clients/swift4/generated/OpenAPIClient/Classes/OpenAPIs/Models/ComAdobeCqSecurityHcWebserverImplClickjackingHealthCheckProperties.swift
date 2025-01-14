//
// ComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqSecurityHcWebserverImplClickjackingHealthCheckProperties: Codable {

    public var hcTags: ConfigNodePropertyArray?
    public var webserverAddress: ConfigNodePropertyString?

    public init(hcTags: ConfigNodePropertyArray?, webserverAddress: ConfigNodePropertyString?) {
        self.hcTags = hcTags
        self.webserverAddress = webserverAddress
    }

    public enum CodingKeys: String, CodingKey { 
        case hcTags = "hc.tags"
        case webserverAddress = "webserver.address"
    }


}

