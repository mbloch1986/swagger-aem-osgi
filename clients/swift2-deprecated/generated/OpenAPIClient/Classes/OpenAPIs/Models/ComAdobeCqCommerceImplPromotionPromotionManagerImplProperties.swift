//
// ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties: JSONEncodable {
    public var cqCommercePromotionRoot: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.commerce.promotion.root"] = self.cqCommercePromotionRoot?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
