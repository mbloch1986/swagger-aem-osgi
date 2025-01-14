//
// ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqSocialUserEndpointsImplUsersGroupFromPublishServletProperties: JSONEncodable {

    public var slingServletExtensions: ConfigNodePropertyString?
    public var slingServletPaths: ConfigNodePropertyString?
    public var slingServletMethods: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["sling.servlet.extensions"] = self.slingServletExtensions?.encodeToJSON()
        nillableDictionary["sling.servlet.paths"] = self.slingServletPaths?.encodeToJSON()
        nillableDictionary["sling.servlet.methods"] = self.slingServletMethods?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

