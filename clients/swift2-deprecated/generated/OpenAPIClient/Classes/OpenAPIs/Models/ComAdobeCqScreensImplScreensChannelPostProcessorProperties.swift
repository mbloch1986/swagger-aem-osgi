//
// ComAdobeCqScreensImplScreensChannelPostProcessorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqScreensImplScreensChannelPostProcessorProperties: JSONEncodable {
    public var screensChannelsPropertiesToRemove: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["screens.channels.properties.to.remove"] = self.screensChannelsPropertiesToRemove?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
