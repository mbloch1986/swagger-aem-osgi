//
// ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteOauthServerImplOAuth2RevocationEndpointServletProperties: JSONEncodable {
    public var slingServletPaths: ConfigNodePropertyString?
    public var oauthRevocationActive: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["sling.servlet.paths"] = self.slingServletPaths?.encodeToJSON()
        nillableDictionary["oauth.revocation.active"] = self.oauthRevocationActive?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
