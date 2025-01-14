package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo._

case class ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSProperties])

object ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoCodecJson: CodecJson[ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo] = CodecJson.derive[ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo]
  implicit val ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoDecoder: EntityDecoder[ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo] = jsonOf[ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo]
  implicit val ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfoEncoder: EntityEncoder[ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo] = jsonEncoderOf[ComAdobeGraniteSecurityUserUiInternalServletsSSLConfigurationSInfo]
}
