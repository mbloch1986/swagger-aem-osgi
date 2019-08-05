//
// ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeGraniteAuthImsImplIMSAccessTokenRequestCustomizerImplProperties: JSONEncodable {

    public var authImsClientSecret: ConfigNodePropertyString?
    public var customizerType: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["auth.ims.client.secret"] = self.authImsClientSecret?.encodeToJSON()
        nillableDictionary["customizer.type"] = self.customizerType?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
