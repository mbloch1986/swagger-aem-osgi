//
// ComAdobeGraniteAuthOauthImplFacebookProviderImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeGraniteAuthOauthImplFacebookProviderImplProperties: JSONEncodable {

    public var oauthProviderId: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["oauth.provider.id"] = self.oauthProviderId?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

