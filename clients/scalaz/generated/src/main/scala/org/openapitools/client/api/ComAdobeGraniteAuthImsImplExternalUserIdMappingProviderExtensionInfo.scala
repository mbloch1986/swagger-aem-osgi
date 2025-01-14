package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfo._

case class ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionProperties])

object ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfoCodecJson: CodecJson[ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfo] = CodecJson.derive[ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfo]
  implicit val ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfoDecoder: EntityDecoder[ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfo] = jsonOf[ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfo]
  implicit val ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfoEncoder: EntityEncoder[ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfo] = jsonEncoderOf[ComAdobeGraniteAuthImsImplExternalUserIdMappingProviderExtensionInfo]
}
