//
// ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties: JSONEncodable {

    public var cqWcmQrcodeServletWhitelist: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["cq.wcm.qrcode.servlet.whitelist"] = self.cqWcmQrcodeServletWhitelist?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

