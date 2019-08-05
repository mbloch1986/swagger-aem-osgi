package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo._

case class ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties])

object ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfoCodecJson: CodecJson[ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo] = CodecJson.derive[ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo]
  implicit val ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfoDecoder: EntityDecoder[ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo] = jsonOf[ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo]
  implicit val ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfoEncoder: EntityEncoder[ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo] = jsonEncoderOf[ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletInfo]
}