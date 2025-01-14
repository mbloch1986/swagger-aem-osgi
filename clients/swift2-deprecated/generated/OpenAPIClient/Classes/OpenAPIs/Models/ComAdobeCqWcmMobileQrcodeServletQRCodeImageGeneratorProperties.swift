//
// ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties: JSONEncodable {
    public var cqWcmQrcodeServletWhitelist: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.wcm.qrcode.servlet.whitelist"] = self.cqWcmQrcodeServletWhitelist?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
