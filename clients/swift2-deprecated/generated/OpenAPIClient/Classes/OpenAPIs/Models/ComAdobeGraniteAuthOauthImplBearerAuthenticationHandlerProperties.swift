//
// ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteAuthOauthImplBearerAuthenticationHandlerProperties: JSONEncodable {
    public var path: ConfigNodePropertyString?
    public var oauthClientIdsAllowed: ConfigNodePropertyArray?
    public var authBearerSyncIms: ConfigNodePropertyBoolean?
    public var authTokenRequestParameter: ConfigNodePropertyString?
    public var oauthBearerConfigid: ConfigNodePropertyString?
    public var oauthJwtSupport: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["path"] = self.path?.encodeToJSON()
        nillableDictionary["oauth.clientIds.allowed"] = self.oauthClientIdsAllowed?.encodeToJSON()
        nillableDictionary["auth.bearer.sync.ims"] = self.authBearerSyncIms?.encodeToJSON()
        nillableDictionary["auth.tokenRequestParameter"] = self.authTokenRequestParameter?.encodeToJSON()
        nillableDictionary["oauth.bearer.configid"] = self.oauthBearerConfigid?.encodeToJSON()
        nillableDictionary["oauth.jwt.support"] = self.oauthJwtSupport?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}