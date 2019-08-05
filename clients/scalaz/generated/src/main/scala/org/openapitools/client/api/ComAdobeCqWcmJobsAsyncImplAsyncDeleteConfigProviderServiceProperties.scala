package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties._

case class ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties (
  threshold: Option[ConfigNodePropertyInteger],
jobTopicName: Option[ConfigNodePropertyString],
emailEnabled: Option[ConfigNodePropertyBoolean])

object ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServicePropertiesCodecJson: CodecJson[ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties] = CodecJson.derive[ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties]
  implicit val ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServicePropertiesDecoder: EntityDecoder[ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties] = jsonOf[ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties]
  implicit val ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServicePropertiesEncoder: EntityEncoder[ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties] = jsonEncoderOf[ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties]
}