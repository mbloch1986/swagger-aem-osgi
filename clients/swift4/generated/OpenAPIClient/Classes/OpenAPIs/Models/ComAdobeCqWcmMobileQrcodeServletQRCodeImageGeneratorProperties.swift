//
// ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties: Codable {

    public var cqWcmQrcodeServletWhitelist: ConfigNodePropertyArray?

    public init(cqWcmQrcodeServletWhitelist: ConfigNodePropertyArray?) {
        self.cqWcmQrcodeServletWhitelist = cqWcmQrcodeServletWhitelist
    }

    public enum CodingKeys: String, CodingKey { 
        case cqWcmQrcodeServletWhitelist = "cq.wcm.qrcode.servlet.whitelist"
    }


}

