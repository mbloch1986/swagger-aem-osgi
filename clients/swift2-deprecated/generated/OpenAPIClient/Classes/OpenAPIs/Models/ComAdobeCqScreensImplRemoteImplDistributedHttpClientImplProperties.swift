//
// ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqScreensImplRemoteImplDistributedHttpClientImplProperties: JSONEncodable {
    public var comAdobeAemScreensImplRemoteRequestTimeout: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["com.adobe.aem.screens.impl.remote.request_timeout"] = self.comAdobeAemScreensImplRemoteRequestTimeout?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
